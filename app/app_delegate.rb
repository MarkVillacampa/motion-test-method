class AppDelegate
  def application(application, didFinishLaunchingWithOptions:launchOptions)
    puts NTLMAuth.new.loginToHost("myhost", withUsername:"myosername", andPassword:"mypassword")
    true
  end
end
