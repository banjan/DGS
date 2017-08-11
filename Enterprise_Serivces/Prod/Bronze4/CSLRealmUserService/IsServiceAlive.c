IsServiceAlive()
{
	lr_start_transaction("RealmUserService_IsServiceAlive");

	web_service_call( "StepName=IsServiceAlive_101",
		"SOAPMethod=RealmUserService|BasicHttpBinding_IRealmUserService|IsServiceAlive",
		"ResponseParam=response",
		"Service=RealmUserService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1485796530.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("RealmUserService_IsServiceAlive", LR_AUTO);

	return 0;
}
