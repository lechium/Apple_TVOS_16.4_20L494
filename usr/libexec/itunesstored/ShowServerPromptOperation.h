//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSString;

@interface ShowServerPromptOperation : ISOperation
{
    NSString *_promptIdentifier;	// 96 = 0x60
}

- (_Bool)_promptNeedsDisplay;	// IMP=0x002000000009f420
- (id)_newStoreURLOperation:(id *)arg1;	// IMP=0x001000000009f20c
- (_Bool)_automaticDownloadsPromptNeedsDisplay;	// IMP=0x001000000009f1c1
- (void)run;	// IMP=0x001000000009eca6
@property(readonly) NSString *promptIdentifier;
- (void)dealloc;	// IMP=0x001000000009ec46
- (id)initWithPromptIdentifier:(id)arg1;	// IMP=0x001000000009ebe8
- (id)init;	// IMP=0x001000000009ebd4

@end

