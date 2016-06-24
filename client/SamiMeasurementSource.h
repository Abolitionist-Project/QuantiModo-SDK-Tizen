/*
 * SamiMeasurementSource.h
 * 
 * 
 */

#ifndef SamiMeasurementSource_H_
#define SamiMeasurementSource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;


namespace Swagger {

class SamiMeasurementSource: public SamiObject {
public:
    SamiMeasurementSource();
    SamiMeasurementSource(String* json);
    virtual ~SamiMeasurementSource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiMeasurementSource* fromJson(String* obj);

    String* getPName();
    void setPName(String* pName);

private:
    String* pName;
};

} /* namespace Swagger */

#endif /* SamiMeasurementSource_H_ */
