GetVersion()
{
	lr_start_transaction("CustomerService_GetVersion");

	web_service_call( "StepName=GetVersion_101",
		"SOAPMethod=CustomerService|BasicHttpBinding_ICustomerService|GetVersion",
		"ResponseParam=response",
		"Service=CustomerService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484935017.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("CustomerService_GetVersion", LR_AUTO);

	return 0;
}
