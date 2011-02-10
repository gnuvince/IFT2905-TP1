#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
# imdbScript.py
# Copyright (C) 2011 Nicolas Martin, Université de Montréal
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program. If not, see <http://www.gnu.org/licenses/>.
#

import imdb
import sys
import locale
import urllib

if len(sys.argv) == 2:
    title = sys.argv[1]
else:
    print 'Usage: python imdbScript.py <film>'
    sys.exit(3)


ia = imdb.IMDb(accessSystem='http', adultSearch=0) # by default access the web.

in_encoding = sys.stdin.encoding or sys.getdefaultencoding()
#out_encoding = locale.getdefaultlocale()[1] or in_encoding
out_encoding = 'UTF-8'


title = unicode(title, in_encoding, 'replace')

# Search for a movie (get a list of Movie objects).
try:
    results = ia.search_movie(title)
except imdb.IMDbError, e:
    print "Probably you're not connected to Internet.  Complete error report:"
    print e
    sys.exit(3)

if not results:
    print 'No matches for "%s", sorry.' % title.encode(out_encoding, 'replace')
    sys.exit(0)

# This is a Movie instance.
movie = results[0]

# So far the Movie object only contains basic information like the
# title and the year; retrieve main information:
ia.update(movie)

for elem in movie.keys():
    if isinstance(elem, unicode):
        elem = str(elem.encode(out_encoding))
    else:
        elem = str(elem)
    print '\n%s :' % elem
    try:
        if type(movie[elem]) == type([]):            
            for pers in movie[elem]:
                if isinstance(pers, unicode):
                    pers = str(pers.encode(out_encoding))
                else:
                    pers = str(pers)
                print '\t%s' % pers
        else:
            if isinstance(movie[elem], unicode):
                movie[elem] = str(movie[elem].encode(out_encoding))
            else:
                movie[elem] = str(movie[elem])
            print '\t%s' % movie[elem]
    except KeyError:
        continue
    except TypeError:
        continue
