/*
 * SamiMeasurementDelete.h
 * 
 * 
 */

#ifndef SamiMeasurementDelete_H_
#define SamiMeasurementDelete_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Integer;


namespace Swagger {

class SamiMeasurementDelete: public SamiObject {
public:
    SamiMeasurementDelete();
    SamiMeasurementDelete(String* json);
    virtual ~SamiMeasurementDelete();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiMeasurementDelete* fromJson(String* obj);

    Integer* getPVariableId();
    void setPVariableId(Integer* pVariableId);
    Integer* getPStartTime();
    void setPStartTime(Integer* pStartTime);

private:
    Integer* pVariableId;
Integer* pStartTime;
};

} /* namespace Swagger */

#endif /* SamiMeasurementDelete_H_ */
