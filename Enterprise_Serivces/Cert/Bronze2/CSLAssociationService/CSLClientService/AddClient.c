AddClient() {
lr_start_transaction("ClientService_AddClient");

  web_service_call("StepName=AddClient_101",
    "SOAPMethod=ClientService|BasicHttpBinding_IClientService|AddClient",
    "ResponseParam=response",
    "Service=ClientService",
    "ExpectedResponse=SoapResult",
    "Snapshot=t1482425527.inf",
    BEGIN_ARGUMENTS,
    "xml:request="
    "<request>"
    "<MachineName>test</MachineName>"
    "<CallbackUrl>http://test.com/</CallbackUrl>"
    "<Description>test</Description>"
    "<Name>abc123</Name>"
    "<VendorID>1234</VendorID>"
    "</request>",
    END_ARGUMENTS,
    BEGIN_RESULT,
    END_RESULT,
    LAST);

  lr_end_transaction("ClientService_AddClient", LR_AUTO);
  
    lr_xml_get_values("XML=[response]",
    "Query=/s:Envelope[1]/s:Body[1]/*/*/a:Client[1]/b:ClientKey[1]",
    "ValueParam=ClientKey",
    LAST);

  lr_xml_get_values("XML=[response]",
    "Query=/s:Envelope[1]/s:Body[1]/*/*/a:Client[1]/b:ClientSecret[1]",
    "ValueParam=ClientSecret",
    LAST);

  return 0;
}