IsServiceAlive()
{
	lr_start_transaction("RealmNonceService_IsServiceAlive");

	web_service_call( "StepName=IsServiceAlive_101",
		"SOAPMethod=RealmNonceService|BasicHttpBinding_IRealmNonceService|IsServiceAlive",
		"ResponseParam=response",
		"Service=RealmNonceService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1483981023.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("RealmNonceService_IsServiceAlive", LR_AUTO);

	return 0;
}
