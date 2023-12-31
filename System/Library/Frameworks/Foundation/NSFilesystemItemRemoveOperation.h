//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSOperation.h"

@class NSError, NSFileManager, NSString;

__attribute__((visibility("hidden")))
@interface NSFilesystemItemRemoveOperation : NSOperation
{
    NSFileManager *_fm;	// 8 = 0x8
    NSString *_removePath;	// 16 = 0x10
    NSError *_error;	// 24 = 0x18
    void *_state;	// 32 = 0x20
}

+ (id)filesystemItemRemoveOperationWithPath:(id)arg1 fileManager:(id)arg2;	// IMP=0x00600000004249b5
+ (id)_errorWithErrno:(int)arg1 atPath:(id)arg2;	// IMP=0x0060000000424530
@property(readonly) NSFileManager *fileManager; // @synthesize fileManager=_fm;
- (void)dealloc;	// IMP=0x0000000000424bf0
- (void)main;	// IMP=0x00000000004249f0
- (id)initWithPath:(id)arg1 fileManager:(id)arg2;	// IMP=0x000000000042492e
- (_Bool)_delegateSaysProceedAfterError:(id)arg1 removingItemAtPath:(id)arg2;	// IMP=0x000000000042475d
- (_Bool)_delegateSaysShouldRemoveItemAtPath:(id)arg1;	// IMP=0x0000000000424621
- (void)_setError:(id)arg1;	// IMP=0x00000000004245e4
- (id)error;	// IMP=0x00000000004245c6

@end

