/*
 * SamiInline_response_200_11.h
 * 
 * 
 */

#ifndef SamiInline_response_200_11_H_
#define SamiInline_response_200_11_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiMeasurement.h"
using Tizen::Base::Boolean;


namespace Swagger {

class SamiInline_response_200_11: public SamiObject {
public:
    SamiInline_response_200_11();
    SamiInline_response_200_11(String* json);
    virtual ~SamiInline_response_200_11();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiInline_response_200_11* fromJson(String* obj);

    Boolean* getPSuccess();
    void setPSuccess(Boolean* pSuccess);
    SamiMeasurement* getPData();
    void setPData(SamiMeasurement* pData);

private:
    Boolean* pSuccess;
SamiMeasurement* pData;
};

} /* namespace Swagger */

#endif /* SamiInline_response_200_11_H_ */
