GetProductRecommendedProducts()
{
	lr_start_transaction("ProductService_GetProductRecommendedProducts");

	web_service_call( "StepName=GetProductRecommendedProducts_101",
		"SOAPMethod=ProductService|ProductServiceHttp|GetProductRecommendedProducts",
		"ResponseParam=response",
		"Service=ProductService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484775683.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("ProductService_GetProductRecommendedProducts", LR_AUTO);

	return 0;
}
