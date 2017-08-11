GetPointsBalance()
{
	lr_start_transaction("CustomerService_GetPointsBalance");

	web_service_call( "StepName=GetPointsBalance_101",
		"SOAPMethod=CustomerService|BasicHttpBinding_ICustomerService|GetPointsBalance",
		"ResponseParam=response",
		"Service=CustomerService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1486568828.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<CustomerID>2151373</CustomerID>"
				//"<CustomerID>1256754783</CustomerID>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("CustomerService_GetPointsBalance", LR_AUTO);

	return 0;
}
