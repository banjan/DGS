GetCustomerLocation()
{
	lr_start_transaction("CustomerService_GetCustomerLocation");

	web_service_call( "StepName=GetCustomerLocation_101",
		"SOAPMethod=CustomerService|BasicHttpBinding_ICustomerService|GetCustomerLocation",
		"ResponseParam=response",
		"Service=CustomerService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484934825.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<ZipCode>76051</ZipCode>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("CustomerService_GetCustomerLocation", LR_AUTO);

	return 0;
}
