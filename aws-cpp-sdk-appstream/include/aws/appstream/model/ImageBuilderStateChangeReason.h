﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/model/ImageBuilderStateChangeReasonCode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace AppStream
{
namespace Model
{

  class AWS_APPSTREAM_API ImageBuilderStateChangeReason
  {
  public:
    ImageBuilderStateChangeReason();
    ImageBuilderStateChangeReason(const Aws::Utils::Json::JsonValue& jsonValue);
    ImageBuilderStateChangeReason& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const ImageBuilderStateChangeReasonCode& GetCode() const{ return m_code; }

    
    inline void SetCode(const ImageBuilderStateChangeReasonCode& value) { m_codeHasBeenSet = true; m_code = value; }

    
    inline void SetCode(ImageBuilderStateChangeReasonCode&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    
    inline ImageBuilderStateChangeReason& WithCode(const ImageBuilderStateChangeReasonCode& value) { SetCode(value); return *this;}

    
    inline ImageBuilderStateChangeReason& WithCode(ImageBuilderStateChangeReasonCode&& value) { SetCode(std::move(value)); return *this;}


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline ImageBuilderStateChangeReason& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline ImageBuilderStateChangeReason& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline ImageBuilderStateChangeReason& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    ImageBuilderStateChangeReasonCode m_code;
    bool m_codeHasBeenSet;

    Aws::String m_message;
    bool m_messageHasBeenSet;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
