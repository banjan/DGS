GetProductReviews()
{
	lr_start_transaction("ProductService_GetProductReviews");

	web_service_call( "StepName=GetProductReviews_101",
		"SOAPMethod=ProductService|ProductServiceHttp|GetProductReviews",
		"ResponseParam=response",
		"Service=ProductService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484775862.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<ProductID>10</ProductID>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("ProductService_GetProductReviews", LR_AUTO);

	return 0;
}
