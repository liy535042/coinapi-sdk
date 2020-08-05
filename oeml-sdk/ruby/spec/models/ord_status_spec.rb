=begin
#OEML - REST API

#This section will provide necessary information about the `CoinAPI OEML REST API` protocol. This API is also available in the Postman application: <a href=\"https://postman.coinapi.io/\" target=\"_blank\">https://postman.coinapi.io/</a>       

The version of the OpenAPI document: v1
Contact: support@coinapi.io
Generated by: https://openapi-generator.tech
OpenAPI Generator version: 4.3.1

=end

require 'spec_helper'
require 'json'
require 'date'

# Unit tests for OpenapiClient::OrdStatus
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe 'OrdStatus' do
  before do
    # run before each test
    @instance = OpenapiClient::OrdStatus.new
  end

  after do
    # run after each test
  end

  describe 'test an instance of OrdStatus' do
    it 'should create an instance of OrdStatus' do
      expect(@instance).to be_instance_of(OpenapiClient::OrdStatus)
    end
  end
end