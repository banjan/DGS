RemoveOffer()
{
	lr_start_transaction("OfferService_RemoveOffer");

	web_service_call( "StepName=RemoveOffer_101",
		"SOAPMethod=OfferService|BasicHttpBinding_IOfferService|RemoveOffer",
		"ResponseParam=response",
		"Service=OfferService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1483546199.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<CouponID>1105228512</CouponID>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("OfferService_RemoveOffer", LR_AUTO);

	lr_xml_find("XML={response}",
	            "Query=/s:Envelope[1]/s:Body[1]/*/*/a:ResponseType[1]",
	            "Value=Success",
	            LAST);
	
	return 0;
}
