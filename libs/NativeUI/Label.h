/* Copyright 2013 David Axmark

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

	http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

/*! \addtogroup NativeUILib
 *  @{
 */

/**
 *  @defgroup NativeUILib Native UI Library
 *  @{
 */

/**
 * @file Label.h
 * @author Bogdan Iusco
 *
 * \brief Class for labels.
 * Methods for setting the text, alignment, font size and color are inherited
 * from TextWidget.
 * Since MoSync 3.2 its background color is transparent.
 */

#ifndef NATIVEUI_LABEL_H_
#define NATIVEUI_LABEL_H_

#include "TextWidget.h"

namespace NativeUI
{
    /**
     * \brief Class for labels.
     *
     * Methods for setting the text, alignment, font size and color are
     * inherited from TextWidget.
     * Since MoSync 3.2 its background color is transparent.
     */
    class Label : public TextWidget
    {
    public:
        /**
         * Constructor.
         */
        Label();

        /**
         * Constructor.
         * @param text The given text.
         */
        Label(const MAUtil::String text);

        /**
         * Destructor.
         */
        virtual ~Label();

        /**
         * Set the maximum number of lines used for rendering text.
         * To remove any maximum limit, and use as many lines as needed,
         * set the value of this property to 0.
         * @param maxNumberOfLines The maximum number of lines.
         * @return Any of the following result codes:
         * - #MAW_RES_OK if the property could be set.
         * - #MAW_RES_INVALID_PROPERTY_VALUE if the maxNumberOfLines value
         *   was invalid.
         */
        virtual int setMaxNumberOfLines(const int maxNumberOfLines);

        /**
         * Get the maximum number of lines used for rendering text.
         * @return The maximum number of lines.
         */
        virtual int getMaxNumberOfLines();
    };

} // namespace NativeUI

#endif /* NATIVEUI_LABEL_H_ */

/*! @} */
