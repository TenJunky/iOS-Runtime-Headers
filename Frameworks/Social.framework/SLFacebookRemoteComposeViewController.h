/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Social.framework/Social
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <SLFacebookComposeViewServiceProtocol>;

@interface SLFacebookRemoteComposeViewController : _UIRemoteViewController  {
    <SLFacebookComposeViewServiceProtocol> *_serviceProxy;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;

    int _controllerResult;
    BOOL _hasAppeared;
}

@property BOOL hasAppeared;


- (void)removeAllURLs;
- (void).cxx_destruct;
- (void)addURL:(id)arg1;
- (void)addAttachment:(id)arg1;
- (void)setInitialText:(id)arg1;
- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)setCompletionHandler:(id)arg1;
- (void)removeAllImages;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)sheetWillDismissWithUserResult:(id)arg1;
- (void)setHasAppeared:(BOOL)arg1;
- (void)dismissModalPresentationAnimated:(id)arg1;
- (void)shouldShowNetworkActivityIndicator:(id)arg1;
- (void)updateAttachment:(id)arg1;
- (void)updateAttachmentPreview:(id)arg1;
- (void)addImageData:(id)arg1;
- (void)setupRemoteViewController;
- (BOOL)hasAppeared;

@end