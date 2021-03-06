/**
* This file is part of bimos.
*
* Copyright (C) 2015 Emilio Garcia-Fidalgo <emilio.garcia@uib.es> (University of the Balearic Islands)
* For more information see: <http://dmi.uib.es/~egarcia>
*
* bimos is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* bimos is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with bimos. If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef UTILBINMOS_H
#define UTILBINMOS_H

#include <stdio.h>

#include <boost/filesystem.hpp>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/xml_parser.hpp>

#include <bimos/util/Image.h>

namespace bimos
{

void ratioMatching(Image* query, Image* train, std::vector<cv::DMatch>& matches, const double ratio = 0.8);
void getImageFilenames(const std::string& directory, std::vector<std::string>& filenames);
void saveMatchings(const int ori, const int dest, const std::string& dir, const std::vector<cv::DMatch>& matches);
void loadMatchings(const int ori, const int dest, const std::string& dir, std::vector<cv::DMatch>& matches);

}
#endif
