GetVersion()
{
	lr_start_transaction("RealmUserService_GetVersion");

	web_service_call( "StepName=GetVersion_101",
		"SOAPMethod=RealmUserService|BasicHttpBinding_IRealmUserService|GetVersion",
		"ResponseParam=response",
		"Service=RealmUserService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1485796487.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("RealmUserService_GetVersion", LR_AUTO);

	return 0;
}
