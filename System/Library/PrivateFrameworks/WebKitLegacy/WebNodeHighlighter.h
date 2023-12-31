//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class WebNodeHighlight, WebView;

__attribute__((visibility("hidden")))
@interface WebNodeHighlighter : NSObject
{
    WebView *_inspectedWebView;	// 8 = 0x8
    WebNodeHighlight *_currentHighlight;	// 16 = 0x10
}

- (void)willDetachWebNodeHighlight:(id)arg1;	// IMP=0x0000000000109c20
- (void)didAttachWebNodeHighlight:(id)arg1;	// IMP=0x0000000000109c00
- (void)hideHighlight;	// IMP=0x0000000000109bb0
- (void)highlight;	// IMP=0x0000000000109ae0
- (void)dealloc;	// IMP=0x0000000000109ab0
- (id)initWithInspectedWebView:(id)arg1;	// IMP=0x0000000000109a70

@end

