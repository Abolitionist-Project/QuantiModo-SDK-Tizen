#ifndef SamiPairsApi_H_
#define SamiPairsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiPairs.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiPairsApi {
public:
  SamiPairsApi();
  virtual ~SamiPairsApi();

  
  void 
  pairsGetWithCompletion(String* cause, String* effect, String* duration, String* delay, String* startTime, String* endTime, String* causeSource, String* effectSource, String* causeUnit, String* effectUnit, void(* handler)(SamiError*));
  
  static String getBasePath() {
    return L"https://localhost/api";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiPairsApi_H_ */
