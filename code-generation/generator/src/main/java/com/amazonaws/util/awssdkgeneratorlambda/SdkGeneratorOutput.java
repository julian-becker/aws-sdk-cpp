/*
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

package com.amazonaws.util.awssdkgeneratorlambda;

import lombok.Data;

/**
 * POJO representing the output of the GenerateJavaSDK lambda function.
 */
@Data
public class SdkGeneratorOutput {

    /**
     * True if function successfully generated an SDK and uploaded it to S3, otherwise false
     */
    private boolean isSuccessful;

    /**
     * Messages returned to the console and cloudWatch if failed.
     */
    private String errorMessage;

    public SdkGeneratorOutput(boolean isSuccessful, String errorMessage) {
        this.isSuccessful = isSuccessful;
        this.errorMessage = errorMessage;
    }
}
