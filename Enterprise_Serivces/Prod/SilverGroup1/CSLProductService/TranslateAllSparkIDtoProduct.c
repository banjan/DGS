TranslateAllSparkIDtoProduct()
{
	lr_start_transaction("ProductService_TranslateAllSparkIDtoProduct");

	web_service_call( "StepName=TranslateAllSparkIDtoProduct_101",
		"SOAPMethod=ProductService|ProductServiceHttp|TranslateAllSparkIDtoProduct",
		"ResponseParam=response",
		"Service=ProductService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484779511.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<AllSparkID>20260</AllSparkID>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("ProductService_TranslateAllSparkIDtoProduct", LR_AUTO);

	return 0;
}
