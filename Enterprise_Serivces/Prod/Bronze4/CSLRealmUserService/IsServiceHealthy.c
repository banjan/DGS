IsServiceHealthy()
{
	lr_start_transaction("RealmUserService_IsServiceHealthy");

	web_service_call( "StepName=IsServiceHealthy_101",
		"SOAPMethod=RealmUserService|BasicHttpBinding_IRealmUserService|IsServiceHealthy",
		"ResponseParam=response",
		"Service=RealmUserService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1485796587.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("RealmUserService_IsServiceHealthy", LR_AUTO);

	return 0;
}
