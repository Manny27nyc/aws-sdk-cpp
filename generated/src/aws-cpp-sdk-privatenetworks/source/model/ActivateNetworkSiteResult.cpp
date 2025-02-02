﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/privatenetworks/model/ActivateNetworkSiteResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::PrivateNetworks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ActivateNetworkSiteResult::ActivateNetworkSiteResult()
{
}

ActivateNetworkSiteResult::ActivateNetworkSiteResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ActivateNetworkSiteResult& ActivateNetworkSiteResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("networkSite"))
  {
    m_networkSite = jsonValue.GetObject("networkSite");

  }



  return *this;
}
