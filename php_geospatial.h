/*
  +----------------------------------------------------------------------+
  | PHP Version 5                                                        |
  +----------------------------------------------------------------------+
  | Copyright (c) 1997-2012 The PHP Group                                |
  +----------------------------------------------------------------------+
  | This source file is subject to version 3.01 of the PHP license,      |
  | that is bundled with this package in the file LICENSE, and is        |
  | available through the world-wide-web at the following url:           |
  | http://www.php.net/license/3_01.txt                                  |
  | If you did not receive a copy of the PHP license and are unable to   |
  | obtain it through the world-wide-web, please send a note to          |
  | license@php.net so we can mail you a copy immediately.               |
  +----------------------------------------------------------------------+
  | Author:                                                              |
  +----------------------------------------------------------------------+
*/

/* $Id$ */

#ifndef PHP_GEOSPATIAL_H
#define PHP_GEOSPATIAL_H

extern zend_module_entry geospatial_module_entry;
#define phpext_geospatial_ptr &geospatial_module_entry

#ifdef PHP_WIN32
#	define PHP_GEOSPATIAL_API __declspec(dllexport)
#elif defined(__GNUC__) && __GNUC__ >= 4
#	define PHP_GEOSPATIAL_API __attribute__ ((visibility("default")))
#else
#	define PHP_GEOSPATIAL_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

#define GEO_DEG_TO_RAD 0.017453292519943295769236907684886
/**
 * Calculate the radius using WGS-84's equatorial radius of
 * 6,378,1370m
 */
#define GEO_EARTH_RADIUS 6378.137

#define AIRY_1830_A 6377563.396
#define AIRY_1830_B 6356256.910

#define WGS84_OSGB36_X -446.448;
#define WGS84_OSGB36_Y 125.157;
#define WGS84_OSGB36_Z -542.060;

#define SCALE_CHANGE 1.0000204894;

#define ROTATION_X -0.1502;
#define ROTATION_Y -0.2470;
#define ROTATION_Z -0.8421;

#define HEIGHT 24.7;


PHP_MINIT_FUNCTION(geospatial);
PHP_MINFO_FUNCTION(geospatial);

PHP_FUNCTION(haversine);
PHP_FUNCTION(helmert);
PHP_FUNCTION(polar_to_cartesian);
PHP_FUNCTION(cartesian_to_polar);

#endif	/* PHP_GEOSPATIAL_H */

/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 * vim600: noet sw=4 ts=4 fdm=marker
 * vim<600: noet sw=4 ts=4
 */
