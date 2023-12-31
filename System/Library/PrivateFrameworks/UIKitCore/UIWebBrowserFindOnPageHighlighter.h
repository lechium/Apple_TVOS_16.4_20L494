//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, UIView, UIWebBrowserView, UIWebPDFViewHandler;
@protocol UIWebFindOnPageHighlighterDelegate;

__attribute__((visibility("hidden")))
@interface UIWebBrowserFindOnPageHighlighter : NSObject
{
    NSMutableArray *_highlightBubbleViews;	// 8 = 0x8
    NSArray *_pdfHighlightViews;	// 16 = 0x10
    UIView *_highlightHostView;	// 24 = 0x18
    UIWebBrowserView *_browserView;	// 32 = 0x20
    UIWebPDFViewHandler *_pdfHandler;	// 40 = 0x28
    _Bool _zoomToHighlightSelection;	// 48 = 0x30
    id <UIWebFindOnPageHighlighterDelegate> _delegate;	// 56 = 0x38
    NSString *_searchText;	// 64 = 0x40
    unsigned long long _numberOfMatches;	// 72 = 0x48
    unsigned long long _highlightedMatchIndex;	// 80 = 0x50
}

+ (_Bool)expandedRectsWouldIntersect:(id)arg1;	// IMP=0x0010000001200bb1
@property(readonly, nonatomic) unsigned long long highlightedMatchIndex; // @synthesize highlightedMatchIndex=_highlightedMatchIndex;
@property(readonly, nonatomic) unsigned long long numberOfMatches; // @synthesize numberOfMatches=_numberOfMatches;
@property(nonatomic) id <UIWebFindOnPageHighlighterDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
- (void)search:(id)arg1 hasPartialResults:(id)arg2;	// IMP=0x0000000001202a80
- (void)searchDidFinish:(id)arg1;	// IMP=0x0000000001202a2e
- (void)searchLimitHit:(id)arg1;	// IMP=0x00000000012029e4
- (void)searchWasCancelled:(id)arg1;	// IMP=0x00000000012029aa
- (void)searchDidTimeOut:(id)arg1;	// IMP=0x0000000001202970
- (void)searchDidBegin:(id)arg1;	// IMP=0x0000000001202936
- (void)highlightPreviousMatch;	// IMP=0x0000000001202922
- (void)highlightNextMatch;	// IMP=0x000000000120290b
- (void)_highlightFindOnPageMatch:(_Bool)arg1;	// IMP=0x0000000001202796
- (void)_highlightFindOnPageMatchForPDF:(_Bool)arg1 withPDFHandler:(id)arg2;	// IMP=0x000000000120270d
- (id)_currentPDFSearchResult;	// IMP=0x0000000001202646
- (_Bool)_updateHighlightedMatchIndex:(_Bool)arg1;	// IMP=0x00000000012025e0
- (void)setSearchText:(id)arg1 matchLimit:(unsigned long long)arg2;	// IMP=0x00000000012023e5
- (unsigned long long)findOnPageOptions;	// IMP=0x00000000012023da
- (_Bool)_highlightSelection;	// IMP=0x0000000001201ea3
- (_Bool)updateHighlightBubbleWobble:(_Bool)arg1;	// IMP=0x00000000012018fb
- (void)setSelectionRect:(struct CGRect)arg1 textRects:(id)arg2 contentViews:(id)arg3 wobble:(_Bool)arg4;	// IMP=0x00000000012018e1
- (void)setSelectionRect:(struct CGRect)arg1 textRects:(id)arg2 contentImage:(struct CGImage *)arg3 wobble:(_Bool)arg4;	// IMP=0x00000000012018c9
- (void)_setSelectionRect:(struct CGRect)arg1 textRects:(id)arg2 contentImage:(struct CGImage *)arg3 contentViews:(id)arg4 wobble:(_Bool)arg5;	// IMP=0x0000000001200fe6
- (void)_clearHighlightViews;	// IMP=0x0000000001200f80
- (void)_addContentViewAtIndex:(unsigned long long)arg1 withRect:(struct CGRect)arg2;	// IMP=0x0000000001200f1d
- (void)clearBrowserView;	// IMP=0x0000000001200b85
- (void)dealloc;	// IMP=0x0000000001200af2
- (void)_commonInitialize;	// IMP=0x0000000001200a86
- (id)initWithPDFViewHandler:(id)arg1;	// IMP=0x0000000001200a09
- (id)initWithBrowserView:(id)arg1;	// IMP=0x0000000001200999

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

