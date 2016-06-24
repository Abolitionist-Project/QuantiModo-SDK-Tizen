/*
 * SamiVariablesNew.h
 * 
 * New variables
 */

#ifndef SamiVariablesNew_H_
#define SamiVariablesNew_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiVariableNew.h"
using Tizen::Base::Collection::IList;


namespace Swagger {

class SamiVariablesNew: public SamiObject {
public:
    SamiVariablesNew();
    SamiVariablesNew(String* json);
    virtual ~SamiVariablesNew();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiVariablesNew* fromJson(String* obj);


private:
    };

} /* namespace Swagger */

#endif /* SamiVariablesNew_H_ */
