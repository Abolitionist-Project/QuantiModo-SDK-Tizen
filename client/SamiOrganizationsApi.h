#ifndef SamiOrganizationsApi_H_
#define SamiOrganizationsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Integer;
#include "SamiUserTokenSuccessfulResponse.h"
#include "SamiUserTokenFailedResponse.h"
#include "SamiUserTokenRequest.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiOrganizationsApi {
public:
  SamiOrganizationsApi();
  virtual ~SamiOrganizationsApi();

  
  SamiUserTokenSuccessfulResponse* 
  v1OrganizationsOrganizationIdUsersPostWithCompletion(Integer* organizationId, SamiUserTokenRequest* body, void (* handler)(SamiUserTokenSuccessfulResponse*, SamiError*));
  
  static String getBasePath() {
    return L"https://localhost/api";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiOrganizationsApi_H_ */
