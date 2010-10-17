// Copyright (C) 2009 by &FULLNAME&.
//
// This file is part of the &PACKAGE_TARNAME&.
//
// &PACKAGE_TARNAME& is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// &PACKAGE_TARNAME& is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with &PACKAGE_TARNAME&.  If not, see <http://www.gnu.org/licenses/>.

#include <&PACKAGE_TARNAME&/&PACKAGE_TARNAME&.hh>

#define BOOST_TEST_MODULE simple

#include <boost/test/unit_test.hpp>
#include <boost/test/output_test_stream.hpp>

using boost::test_tools::output_test_stream;

BOOST_AUTO_TEST_CASE (simple)
{
  // FIXME: replace by a real test!
  BOOST_CHECK_EQUAL (1 + 1, 2);
}
