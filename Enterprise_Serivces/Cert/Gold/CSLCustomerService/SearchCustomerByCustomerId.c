SearchCustomerByCustomerId()
{
	lr_start_transaction("CustomerService_SearchCustomerByCustomerId");

	web_service_call( "StepName=SearchCustomerByCustomerId_101",
		"SOAPMethod=CustomerService|BasicHttpBinding_ICustomerService|SearchCustomerByCustomerId",
		"ResponseParam=response",
		"Service=CustomerService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484933373.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<CustomerID>1256754783</CustomerID>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("CustomerService_SearchCustomerByCustomerId", LR_AUTO);

	return 0;
}
