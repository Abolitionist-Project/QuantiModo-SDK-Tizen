/*
 * SamiInline_response_200_2.h
 * 
 * 
 */

#ifndef SamiInline_response_200_2_H_
#define SamiInline_response_200_2_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiTrackingReminder.h"
using Tizen::Base::Boolean;


namespace Swagger {

class SamiInline_response_200_2: public SamiObject {
public:
    SamiInline_response_200_2();
    SamiInline_response_200_2(String* json);
    virtual ~SamiInline_response_200_2();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiInline_response_200_2* fromJson(String* obj);

    Boolean* getPSuccess();
    void setPSuccess(Boolean* pSuccess);
    SamiTrackingReminder* getPData();
    void setPData(SamiTrackingReminder* pData);

private:
    Boolean* pSuccess;
SamiTrackingReminder* pData;
};

} /* namespace Swagger */

#endif /* SamiInline_response_200_2_H_ */
