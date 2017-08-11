GetComplexRecommendation()
{
	lr_start_transaction("LoyaltyService_GetComplexRecommendation");

	web_service_call( "StepName=GetComplexRecommendation_101",
		"SOAPMethod=LoyaltyService|BasicHttpBinding_LoyaltyService|GetComplexRecommendation",
		"ResponseParam=response",
		"Service=LoyaltyService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1487021324.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<Age>21</Age>"
				"<CustomerID>123456789</CustomerID>"
				"<MaxEsrbRating>M</MaxEsrbRating>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("LoyaltyService_GetComplexRecommendation", LR_AUTO);

	return 0;
}
