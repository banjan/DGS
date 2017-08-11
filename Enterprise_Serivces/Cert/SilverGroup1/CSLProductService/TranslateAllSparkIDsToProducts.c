TranslateAllSparkIDsToProducts()
{
	lr_start_transaction("ProductService_TranslateAllSparkIDsToProducts");

	web_service_call( "StepName=TranslateAllSparkIDsToProducts_101",
		"SOAPMethod=ProductService|ProductServiceHttp|TranslateAllSparkIDsToProducts",
		"ResponseParam=response",
		"Service=ProductService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484779160.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<AllSparkIDs>"
					"<long>20260</long>"
					"<long>20185</long>"
					"<long>20275</long>"
					"<long>33340</long>"
				"</AllSparkIDs>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("ProductService_TranslateAllSparkIDsToProducts", LR_AUTO);

	return 0;
}
