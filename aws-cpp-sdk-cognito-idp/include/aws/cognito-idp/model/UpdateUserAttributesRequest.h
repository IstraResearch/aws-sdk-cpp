﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/CognitoIdentityProviderRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/cognito-idp/model/AttributeType.h>
#include <utility>

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>Represents the request to update user attributes.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UpdateUserAttributesRequest">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API UpdateUserAttributesRequest : public CognitoIdentityProviderRequest
  {
  public:
    UpdateUserAttributesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateUserAttributes"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>An array of name-value pairs representing user attributes.</p> <p>For custom
     * attributes, you must prepend the <code>custom:</code> prefix to the attribute
     * name.</p>
     */
    inline const Aws::Vector<AttributeType>& GetUserAttributes() const{ return m_userAttributes; }

    /**
     * <p>An array of name-value pairs representing user attributes.</p> <p>For custom
     * attributes, you must prepend the <code>custom:</code> prefix to the attribute
     * name.</p>
     */
    inline bool UserAttributesHasBeenSet() const { return m_userAttributesHasBeenSet; }

    /**
     * <p>An array of name-value pairs representing user attributes.</p> <p>For custom
     * attributes, you must prepend the <code>custom:</code> prefix to the attribute
     * name.</p>
     */
    inline void SetUserAttributes(const Aws::Vector<AttributeType>& value) { m_userAttributesHasBeenSet = true; m_userAttributes = value; }

    /**
     * <p>An array of name-value pairs representing user attributes.</p> <p>For custom
     * attributes, you must prepend the <code>custom:</code> prefix to the attribute
     * name.</p>
     */
    inline void SetUserAttributes(Aws::Vector<AttributeType>&& value) { m_userAttributesHasBeenSet = true; m_userAttributes = std::move(value); }

    /**
     * <p>An array of name-value pairs representing user attributes.</p> <p>For custom
     * attributes, you must prepend the <code>custom:</code> prefix to the attribute
     * name.</p>
     */
    inline UpdateUserAttributesRequest& WithUserAttributes(const Aws::Vector<AttributeType>& value) { SetUserAttributes(value); return *this;}

    /**
     * <p>An array of name-value pairs representing user attributes.</p> <p>For custom
     * attributes, you must prepend the <code>custom:</code> prefix to the attribute
     * name.</p>
     */
    inline UpdateUserAttributesRequest& WithUserAttributes(Aws::Vector<AttributeType>&& value) { SetUserAttributes(std::move(value)); return *this;}

    /**
     * <p>An array of name-value pairs representing user attributes.</p> <p>For custom
     * attributes, you must prepend the <code>custom:</code> prefix to the attribute
     * name.</p>
     */
    inline UpdateUserAttributesRequest& AddUserAttributes(const AttributeType& value) { m_userAttributesHasBeenSet = true; m_userAttributes.push_back(value); return *this; }

    /**
     * <p>An array of name-value pairs representing user attributes.</p> <p>For custom
     * attributes, you must prepend the <code>custom:</code> prefix to the attribute
     * name.</p>
     */
    inline UpdateUserAttributesRequest& AddUserAttributes(AttributeType&& value) { m_userAttributesHasBeenSet = true; m_userAttributes.push_back(std::move(value)); return *this; }


    /**
     * <p>The access token for the request to update user attributes.</p>
     */
    inline const Aws::String& GetAccessToken() const{ return m_accessToken; }

    /**
     * <p>The access token for the request to update user attributes.</p>
     */
    inline bool AccessTokenHasBeenSet() const { return m_accessTokenHasBeenSet; }

    /**
     * <p>The access token for the request to update user attributes.</p>
     */
    inline void SetAccessToken(const Aws::String& value) { m_accessTokenHasBeenSet = true; m_accessToken = value; }

    /**
     * <p>The access token for the request to update user attributes.</p>
     */
    inline void SetAccessToken(Aws::String&& value) { m_accessTokenHasBeenSet = true; m_accessToken = std::move(value); }

    /**
     * <p>The access token for the request to update user attributes.</p>
     */
    inline void SetAccessToken(const char* value) { m_accessTokenHasBeenSet = true; m_accessToken.assign(value); }

    /**
     * <p>The access token for the request to update user attributes.</p>
     */
    inline UpdateUserAttributesRequest& WithAccessToken(const Aws::String& value) { SetAccessToken(value); return *this;}

    /**
     * <p>The access token for the request to update user attributes.</p>
     */
    inline UpdateUserAttributesRequest& WithAccessToken(Aws::String&& value) { SetAccessToken(std::move(value)); return *this;}

    /**
     * <p>The access token for the request to update user attributes.</p>
     */
    inline UpdateUserAttributesRequest& WithAccessToken(const char* value) { SetAccessToken(value); return *this;}


    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action initiates. </p> <p>You create custom workflows by
     * assigning Lambda functions to user pool triggers. When you use the
     * UpdateUserAttributes API action, Amazon Cognito invokes the function that is
     * assigned to the <i>custom message</i> trigger. When Amazon Cognito invokes this
     * function, it passes a JSON payload, which the function receives as input. This
     * payload contains a <code>clientMetadata</code> attribute, which provides the
     * data that you assigned to the ClientMetadata parameter in your
     * UpdateUserAttributes request. In your function code in Lambda, you can process
     * the <code>clientMetadata</code> value to enhance your workflow for your specific
     * needs.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-working-with-aws-lambda-triggers.html">
     * Customizing user pool Workflows with Lambda Triggers</a> in the <i>Amazon
     * Cognito Developer Guide</i>.</p>  <p>When you use the ClientMetadata
     * parameter, remember that Amazon Cognito won't do the following:</p> <ul> <li>
     * <p>Store the ClientMetadata value. This data is available only to Lambda
     * triggers that are assigned to a user pool to support custom workflows. If your
     * user pool configuration doesn't include triggers, the ClientMetadata parameter
     * serves no purpose.</p> </li> <li> <p>Validate the ClientMetadata value.</p>
     * </li> <li> <p>Encrypt the ClientMetadata value. Don't use Amazon Cognito to
     * provide sensitive information.</p> </li> </ul> 
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetClientMetadata() const{ return m_clientMetadata; }

    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action initiates. </p> <p>You create custom workflows by
     * assigning Lambda functions to user pool triggers. When you use the
     * UpdateUserAttributes API action, Amazon Cognito invokes the function that is
     * assigned to the <i>custom message</i> trigger. When Amazon Cognito invokes this
     * function, it passes a JSON payload, which the function receives as input. This
     * payload contains a <code>clientMetadata</code> attribute, which provides the
     * data that you assigned to the ClientMetadata parameter in your
     * UpdateUserAttributes request. In your function code in Lambda, you can process
     * the <code>clientMetadata</code> value to enhance your workflow for your specific
     * needs.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-working-with-aws-lambda-triggers.html">
     * Customizing user pool Workflows with Lambda Triggers</a> in the <i>Amazon
     * Cognito Developer Guide</i>.</p>  <p>When you use the ClientMetadata
     * parameter, remember that Amazon Cognito won't do the following:</p> <ul> <li>
     * <p>Store the ClientMetadata value. This data is available only to Lambda
     * triggers that are assigned to a user pool to support custom workflows. If your
     * user pool configuration doesn't include triggers, the ClientMetadata parameter
     * serves no purpose.</p> </li> <li> <p>Validate the ClientMetadata value.</p>
     * </li> <li> <p>Encrypt the ClientMetadata value. Don't use Amazon Cognito to
     * provide sensitive information.</p> </li> </ul> 
     */
    inline bool ClientMetadataHasBeenSet() const { return m_clientMetadataHasBeenSet; }

    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action initiates. </p> <p>You create custom workflows by
     * assigning Lambda functions to user pool triggers. When you use the
     * UpdateUserAttributes API action, Amazon Cognito invokes the function that is
     * assigned to the <i>custom message</i> trigger. When Amazon Cognito invokes this
     * function, it passes a JSON payload, which the function receives as input. This
     * payload contains a <code>clientMetadata</code> attribute, which provides the
     * data that you assigned to the ClientMetadata parameter in your
     * UpdateUserAttributes request. In your function code in Lambda, you can process
     * the <code>clientMetadata</code> value to enhance your workflow for your specific
     * needs.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-working-with-aws-lambda-triggers.html">
     * Customizing user pool Workflows with Lambda Triggers</a> in the <i>Amazon
     * Cognito Developer Guide</i>.</p>  <p>When you use the ClientMetadata
     * parameter, remember that Amazon Cognito won't do the following:</p> <ul> <li>
     * <p>Store the ClientMetadata value. This data is available only to Lambda
     * triggers that are assigned to a user pool to support custom workflows. If your
     * user pool configuration doesn't include triggers, the ClientMetadata parameter
     * serves no purpose.</p> </li> <li> <p>Validate the ClientMetadata value.</p>
     * </li> <li> <p>Encrypt the ClientMetadata value. Don't use Amazon Cognito to
     * provide sensitive information.</p> </li> </ul> 
     */
    inline void SetClientMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata = value; }

    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action initiates. </p> <p>You create custom workflows by
     * assigning Lambda functions to user pool triggers. When you use the
     * UpdateUserAttributes API action, Amazon Cognito invokes the function that is
     * assigned to the <i>custom message</i> trigger. When Amazon Cognito invokes this
     * function, it passes a JSON payload, which the function receives as input. This
     * payload contains a <code>clientMetadata</code> attribute, which provides the
     * data that you assigned to the ClientMetadata parameter in your
     * UpdateUserAttributes request. In your function code in Lambda, you can process
     * the <code>clientMetadata</code> value to enhance your workflow for your specific
     * needs.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-working-with-aws-lambda-triggers.html">
     * Customizing user pool Workflows with Lambda Triggers</a> in the <i>Amazon
     * Cognito Developer Guide</i>.</p>  <p>When you use the ClientMetadata
     * parameter, remember that Amazon Cognito won't do the following:</p> <ul> <li>
     * <p>Store the ClientMetadata value. This data is available only to Lambda
     * triggers that are assigned to a user pool to support custom workflows. If your
     * user pool configuration doesn't include triggers, the ClientMetadata parameter
     * serves no purpose.</p> </li> <li> <p>Validate the ClientMetadata value.</p>
     * </li> <li> <p>Encrypt the ClientMetadata value. Don't use Amazon Cognito to
     * provide sensitive information.</p> </li> </ul> 
     */
    inline void SetClientMetadata(Aws::Map<Aws::String, Aws::String>&& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata = std::move(value); }

    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action initiates. </p> <p>You create custom workflows by
     * assigning Lambda functions to user pool triggers. When you use the
     * UpdateUserAttributes API action, Amazon Cognito invokes the function that is
     * assigned to the <i>custom message</i> trigger. When Amazon Cognito invokes this
     * function, it passes a JSON payload, which the function receives as input. This
     * payload contains a <code>clientMetadata</code> attribute, which provides the
     * data that you assigned to the ClientMetadata parameter in your
     * UpdateUserAttributes request. In your function code in Lambda, you can process
     * the <code>clientMetadata</code> value to enhance your workflow for your specific
     * needs.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-working-with-aws-lambda-triggers.html">
     * Customizing user pool Workflows with Lambda Triggers</a> in the <i>Amazon
     * Cognito Developer Guide</i>.</p>  <p>When you use the ClientMetadata
     * parameter, remember that Amazon Cognito won't do the following:</p> <ul> <li>
     * <p>Store the ClientMetadata value. This data is available only to Lambda
     * triggers that are assigned to a user pool to support custom workflows. If your
     * user pool configuration doesn't include triggers, the ClientMetadata parameter
     * serves no purpose.</p> </li> <li> <p>Validate the ClientMetadata value.</p>
     * </li> <li> <p>Encrypt the ClientMetadata value. Don't use Amazon Cognito to
     * provide sensitive information.</p> </li> </ul> 
     */
    inline UpdateUserAttributesRequest& WithClientMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetClientMetadata(value); return *this;}

    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action initiates. </p> <p>You create custom workflows by
     * assigning Lambda functions to user pool triggers. When you use the
     * UpdateUserAttributes API action, Amazon Cognito invokes the function that is
     * assigned to the <i>custom message</i> trigger. When Amazon Cognito invokes this
     * function, it passes a JSON payload, which the function receives as input. This
     * payload contains a <code>clientMetadata</code> attribute, which provides the
     * data that you assigned to the ClientMetadata parameter in your
     * UpdateUserAttributes request. In your function code in Lambda, you can process
     * the <code>clientMetadata</code> value to enhance your workflow for your specific
     * needs.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-working-with-aws-lambda-triggers.html">
     * Customizing user pool Workflows with Lambda Triggers</a> in the <i>Amazon
     * Cognito Developer Guide</i>.</p>  <p>When you use the ClientMetadata
     * parameter, remember that Amazon Cognito won't do the following:</p> <ul> <li>
     * <p>Store the ClientMetadata value. This data is available only to Lambda
     * triggers that are assigned to a user pool to support custom workflows. If your
     * user pool configuration doesn't include triggers, the ClientMetadata parameter
     * serves no purpose.</p> </li> <li> <p>Validate the ClientMetadata value.</p>
     * </li> <li> <p>Encrypt the ClientMetadata value. Don't use Amazon Cognito to
     * provide sensitive information.</p> </li> </ul> 
     */
    inline UpdateUserAttributesRequest& WithClientMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetClientMetadata(std::move(value)); return *this;}

    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action initiates. </p> <p>You create custom workflows by
     * assigning Lambda functions to user pool triggers. When you use the
     * UpdateUserAttributes API action, Amazon Cognito invokes the function that is
     * assigned to the <i>custom message</i> trigger. When Amazon Cognito invokes this
     * function, it passes a JSON payload, which the function receives as input. This
     * payload contains a <code>clientMetadata</code> attribute, which provides the
     * data that you assigned to the ClientMetadata parameter in your
     * UpdateUserAttributes request. In your function code in Lambda, you can process
     * the <code>clientMetadata</code> value to enhance your workflow for your specific
     * needs.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-working-with-aws-lambda-triggers.html">
     * Customizing user pool Workflows with Lambda Triggers</a> in the <i>Amazon
     * Cognito Developer Guide</i>.</p>  <p>When you use the ClientMetadata
     * parameter, remember that Amazon Cognito won't do the following:</p> <ul> <li>
     * <p>Store the ClientMetadata value. This data is available only to Lambda
     * triggers that are assigned to a user pool to support custom workflows. If your
     * user pool configuration doesn't include triggers, the ClientMetadata parameter
     * serves no purpose.</p> </li> <li> <p>Validate the ClientMetadata value.</p>
     * </li> <li> <p>Encrypt the ClientMetadata value. Don't use Amazon Cognito to
     * provide sensitive information.</p> </li> </ul> 
     */
    inline UpdateUserAttributesRequest& AddClientMetadata(const Aws::String& key, const Aws::String& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(key, value); return *this; }

    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action initiates. </p> <p>You create custom workflows by
     * assigning Lambda functions to user pool triggers. When you use the
     * UpdateUserAttributes API action, Amazon Cognito invokes the function that is
     * assigned to the <i>custom message</i> trigger. When Amazon Cognito invokes this
     * function, it passes a JSON payload, which the function receives as input. This
     * payload contains a <code>clientMetadata</code> attribute, which provides the
     * data that you assigned to the ClientMetadata parameter in your
     * UpdateUserAttributes request. In your function code in Lambda, you can process
     * the <code>clientMetadata</code> value to enhance your workflow for your specific
     * needs.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-working-with-aws-lambda-triggers.html">
     * Customizing user pool Workflows with Lambda Triggers</a> in the <i>Amazon
     * Cognito Developer Guide</i>.</p>  <p>When you use the ClientMetadata
     * parameter, remember that Amazon Cognito won't do the following:</p> <ul> <li>
     * <p>Store the ClientMetadata value. This data is available only to Lambda
     * triggers that are assigned to a user pool to support custom workflows. If your
     * user pool configuration doesn't include triggers, the ClientMetadata parameter
     * serves no purpose.</p> </li> <li> <p>Validate the ClientMetadata value.</p>
     * </li> <li> <p>Encrypt the ClientMetadata value. Don't use Amazon Cognito to
     * provide sensitive information.</p> </li> </ul> 
     */
    inline UpdateUserAttributesRequest& AddClientMetadata(Aws::String&& key, const Aws::String& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action initiates. </p> <p>You create custom workflows by
     * assigning Lambda functions to user pool triggers. When you use the
     * UpdateUserAttributes API action, Amazon Cognito invokes the function that is
     * assigned to the <i>custom message</i> trigger. When Amazon Cognito invokes this
     * function, it passes a JSON payload, which the function receives as input. This
     * payload contains a <code>clientMetadata</code> attribute, which provides the
     * data that you assigned to the ClientMetadata parameter in your
     * UpdateUserAttributes request. In your function code in Lambda, you can process
     * the <code>clientMetadata</code> value to enhance your workflow for your specific
     * needs.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-working-with-aws-lambda-triggers.html">
     * Customizing user pool Workflows with Lambda Triggers</a> in the <i>Amazon
     * Cognito Developer Guide</i>.</p>  <p>When you use the ClientMetadata
     * parameter, remember that Amazon Cognito won't do the following:</p> <ul> <li>
     * <p>Store the ClientMetadata value. This data is available only to Lambda
     * triggers that are assigned to a user pool to support custom workflows. If your
     * user pool configuration doesn't include triggers, the ClientMetadata parameter
     * serves no purpose.</p> </li> <li> <p>Validate the ClientMetadata value.</p>
     * </li> <li> <p>Encrypt the ClientMetadata value. Don't use Amazon Cognito to
     * provide sensitive information.</p> </li> </ul> 
     */
    inline UpdateUserAttributesRequest& AddClientMetadata(const Aws::String& key, Aws::String&& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action initiates. </p> <p>You create custom workflows by
     * assigning Lambda functions to user pool triggers. When you use the
     * UpdateUserAttributes API action, Amazon Cognito invokes the function that is
     * assigned to the <i>custom message</i> trigger. When Amazon Cognito invokes this
     * function, it passes a JSON payload, which the function receives as input. This
     * payload contains a <code>clientMetadata</code> attribute, which provides the
     * data that you assigned to the ClientMetadata parameter in your
     * UpdateUserAttributes request. In your function code in Lambda, you can process
     * the <code>clientMetadata</code> value to enhance your workflow for your specific
     * needs.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-working-with-aws-lambda-triggers.html">
     * Customizing user pool Workflows with Lambda Triggers</a> in the <i>Amazon
     * Cognito Developer Guide</i>.</p>  <p>When you use the ClientMetadata
     * parameter, remember that Amazon Cognito won't do the following:</p> <ul> <li>
     * <p>Store the ClientMetadata value. This data is available only to Lambda
     * triggers that are assigned to a user pool to support custom workflows. If your
     * user pool configuration doesn't include triggers, the ClientMetadata parameter
     * serves no purpose.</p> </li> <li> <p>Validate the ClientMetadata value.</p>
     * </li> <li> <p>Encrypt the ClientMetadata value. Don't use Amazon Cognito to
     * provide sensitive information.</p> </li> </ul> 
     */
    inline UpdateUserAttributesRequest& AddClientMetadata(Aws::String&& key, Aws::String&& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action initiates. </p> <p>You create custom workflows by
     * assigning Lambda functions to user pool triggers. When you use the
     * UpdateUserAttributes API action, Amazon Cognito invokes the function that is
     * assigned to the <i>custom message</i> trigger. When Amazon Cognito invokes this
     * function, it passes a JSON payload, which the function receives as input. This
     * payload contains a <code>clientMetadata</code> attribute, which provides the
     * data that you assigned to the ClientMetadata parameter in your
     * UpdateUserAttributes request. In your function code in Lambda, you can process
     * the <code>clientMetadata</code> value to enhance your workflow for your specific
     * needs.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-working-with-aws-lambda-triggers.html">
     * Customizing user pool Workflows with Lambda Triggers</a> in the <i>Amazon
     * Cognito Developer Guide</i>.</p>  <p>When you use the ClientMetadata
     * parameter, remember that Amazon Cognito won't do the following:</p> <ul> <li>
     * <p>Store the ClientMetadata value. This data is available only to Lambda
     * triggers that are assigned to a user pool to support custom workflows. If your
     * user pool configuration doesn't include triggers, the ClientMetadata parameter
     * serves no purpose.</p> </li> <li> <p>Validate the ClientMetadata value.</p>
     * </li> <li> <p>Encrypt the ClientMetadata value. Don't use Amazon Cognito to
     * provide sensitive information.</p> </li> </ul> 
     */
    inline UpdateUserAttributesRequest& AddClientMetadata(const char* key, Aws::String&& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action initiates. </p> <p>You create custom workflows by
     * assigning Lambda functions to user pool triggers. When you use the
     * UpdateUserAttributes API action, Amazon Cognito invokes the function that is
     * assigned to the <i>custom message</i> trigger. When Amazon Cognito invokes this
     * function, it passes a JSON payload, which the function receives as input. This
     * payload contains a <code>clientMetadata</code> attribute, which provides the
     * data that you assigned to the ClientMetadata parameter in your
     * UpdateUserAttributes request. In your function code in Lambda, you can process
     * the <code>clientMetadata</code> value to enhance your workflow for your specific
     * needs.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-working-with-aws-lambda-triggers.html">
     * Customizing user pool Workflows with Lambda Triggers</a> in the <i>Amazon
     * Cognito Developer Guide</i>.</p>  <p>When you use the ClientMetadata
     * parameter, remember that Amazon Cognito won't do the following:</p> <ul> <li>
     * <p>Store the ClientMetadata value. This data is available only to Lambda
     * triggers that are assigned to a user pool to support custom workflows. If your
     * user pool configuration doesn't include triggers, the ClientMetadata parameter
     * serves no purpose.</p> </li> <li> <p>Validate the ClientMetadata value.</p>
     * </li> <li> <p>Encrypt the ClientMetadata value. Don't use Amazon Cognito to
     * provide sensitive information.</p> </li> </ul> 
     */
    inline UpdateUserAttributesRequest& AddClientMetadata(Aws::String&& key, const char* value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action initiates. </p> <p>You create custom workflows by
     * assigning Lambda functions to user pool triggers. When you use the
     * UpdateUserAttributes API action, Amazon Cognito invokes the function that is
     * assigned to the <i>custom message</i> trigger. When Amazon Cognito invokes this
     * function, it passes a JSON payload, which the function receives as input. This
     * payload contains a <code>clientMetadata</code> attribute, which provides the
     * data that you assigned to the ClientMetadata parameter in your
     * UpdateUserAttributes request. In your function code in Lambda, you can process
     * the <code>clientMetadata</code> value to enhance your workflow for your specific
     * needs.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-working-with-aws-lambda-triggers.html">
     * Customizing user pool Workflows with Lambda Triggers</a> in the <i>Amazon
     * Cognito Developer Guide</i>.</p>  <p>When you use the ClientMetadata
     * parameter, remember that Amazon Cognito won't do the following:</p> <ul> <li>
     * <p>Store the ClientMetadata value. This data is available only to Lambda
     * triggers that are assigned to a user pool to support custom workflows. If your
     * user pool configuration doesn't include triggers, the ClientMetadata parameter
     * serves no purpose.</p> </li> <li> <p>Validate the ClientMetadata value.</p>
     * </li> <li> <p>Encrypt the ClientMetadata value. Don't use Amazon Cognito to
     * provide sensitive information.</p> </li> </ul> 
     */
    inline UpdateUserAttributesRequest& AddClientMetadata(const char* key, const char* value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(key, value); return *this; }

  private:

    Aws::Vector<AttributeType> m_userAttributes;
    bool m_userAttributesHasBeenSet;

    Aws::String m_accessToken;
    bool m_accessTokenHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_clientMetadata;
    bool m_clientMetadataHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
