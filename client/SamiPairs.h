/*
 * SamiPairs.h
 * 
 * 
 */

#ifndef SamiPairs_H_
#define SamiPairs_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;


namespace Swagger {

class SamiPairs: public SamiObject {
public:
    SamiPairs();
    SamiPairs(String* json);
    virtual ~SamiPairs();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiPairs* fromJson(String* obj);

    String* getPName();
    void setPName(String* pName);

private:
    String* pName;
};

} /* namespace Swagger */

#endif /* SamiPairs_H_ */
