//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIWebScrollView.h"

@class UIWebBrowserView, _UIWebViewScrollViewDelegateForwarder;

__attribute__((visibility("hidden")))
@interface _UIWebViewScrollView : UIWebScrollView
{
    _UIWebViewScrollViewDelegateForwarder *_forwarder;	// 152 = 0x98
    _Bool _bouncesSetExplicitly;	// 160 = 0xa0
    _Bool _contentInsetAdjustmentBehaviorWasExternallyOverridden;	// 161 = 0xa1
    UIWebBrowserView *_browserView;	// 168 = 0xa8
}

- (void)_setContentInsetAdjustmentBehaviorInternal:(long long)arg1;	// IMP=0x000000000125093b
- (void)setContentInsetAdjustmentBehavior:(long long)arg1;	// IMP=0x0000000001250901
- (_Bool)_contentInsetAdjustmentBehaviorWasExternallyOverridden;	// IMP=0x00000000012508f1
- (void)_setWebView:(id)arg1;	// IMP=0x000000000125087d
- (id)delegate;	// IMP=0x0000000001250860
- (void)setDelegate:(id)arg1;	// IMP=0x00000000012507f0
- (void)setBouncesHorizontally:(_Bool)arg1;	// IMP=0x00000000012507b4
- (void)setBouncesVertically:(_Bool)arg1;	// IMP=0x0000000001250778
- (void)setBounces:(_Bool)arg1;	// IMP=0x000000000125073c
- (void)_weaklySetBouncesHorizontally:(_Bool)arg1;	// IMP=0x00000000012506fd
- (void)dealloc;	// IMP=0x00000000012506af
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000125062d

@end
