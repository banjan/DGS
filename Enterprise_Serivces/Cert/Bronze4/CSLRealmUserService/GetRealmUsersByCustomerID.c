GetRealmUsersByCustomerID()
{
	lr_start_transaction("RealmUserService_GetRealmUsersByCustomerID");

	web_service_call( "StepName=GetRealmUsersByCustomerID_101",
		"SOAPMethod=RealmUserService|BasicHttpBinding_IRealmUserService|GetRealmUsersByCustomerID",
		"ResponseParam=response",
		"Service=RealmUserService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1485795925.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<CustomerID>2150431</CustomerID>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("RealmUserService_GetRealmUsersByCustomerID", LR_AUTO);

	return 0;
}
