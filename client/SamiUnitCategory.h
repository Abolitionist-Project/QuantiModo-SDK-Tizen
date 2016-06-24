/*
 * SamiUnitCategory.h
 * 
 * 
 */

#ifndef SamiUnitCategory_H_
#define SamiUnitCategory_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;


namespace Swagger {

class SamiUnitCategory: public SamiObject {
public:
    SamiUnitCategory();
    SamiUnitCategory(String* json);
    virtual ~SamiUnitCategory();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiUnitCategory* fromJson(String* obj);

    String* getPName();
    void setPName(String* pName);

private:
    String* pName;
};

} /* namespace Swagger */

#endif /* SamiUnitCategory_H_ */
