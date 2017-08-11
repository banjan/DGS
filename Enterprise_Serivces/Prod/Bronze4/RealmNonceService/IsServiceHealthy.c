IsServiceHealthy()
{
	lr_start_transaction("RealmNonceService_IsServiceHealthy");

	web_service_call( "StepName=IsServiceHealthy_101",
		"SOAPMethod=RealmNonceService|BasicHttpBinding_IRealmNonceService|IsServiceHealthy",
		"ResponseParam=response",
		"Service=RealmNonceService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1483981083.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("RealmNonceService_IsServiceHealthy", LR_AUTO);

	return 0;
}
