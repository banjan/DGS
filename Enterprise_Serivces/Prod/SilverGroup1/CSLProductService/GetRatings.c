GetRatings()
{
	lr_start_transaction("ProductService_GetRatings");

	web_service_call( "StepName=GetRatings_101",
		"SOAPMethod=ProductService|ProductServiceHttp|GetRatings",
		"ResponseParam=response",
		"Service=ProductService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484776948.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("ProductService_GetRatings", LR_AUTO);

	return 0;
}
