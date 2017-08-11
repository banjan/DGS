GetSkusWithFreeDLC()
{
	lr_start_transaction("DigitalContentService_GetSkusWithFreeDLC");

	web_service_call( "StepName=GetSkusWithFreeDLC_102",
		"SOAPMethod=DigitalContentService|BasicHttpBinding_IDigitalContentService|GetSkusWithFreeDLC",
		"ResponseParam=response",
		"Service=DigitalContentService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1482857948.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("DigitalContentService_GetSkusWithFreeDLC", LR_AUTO);

	return 0;
}
