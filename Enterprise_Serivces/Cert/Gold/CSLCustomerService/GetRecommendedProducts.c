GetRecommendedProducts()
{
	lr_start_transaction("CustomerService_GetRecommendedProducts");

	web_service_call( "StepName=GetRecommendedProducts_101",
		"SOAPMethod=CustomerService|BasicHttpBinding_ICustomerService|GetRecommendedProducts",
		"ResponseParam=response",
		"Service=CustomerService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484934930.inf",
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

	lr_end_transaction("CustomerService_GetRecommendedProducts", LR_AUTO);

	return 0;
}
