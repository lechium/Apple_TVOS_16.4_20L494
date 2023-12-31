//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SHDataStream;

__attribute__((visibility("hidden")))
@interface SHDataStreamInput : NSObject
{
    id <SHDataStream> _next;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000004e0c
@property(retain, nonatomic) id <SHDataStream> next; // @synthesize next=_next;
- (_Bool)processData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000004d74
- (_Bool)closeWithError:(id *)arg1;	// IMP=0x0000000000004ce9
- (_Bool)readFromURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000004adb
- (_Bool)loadDataFromURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000004977

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

