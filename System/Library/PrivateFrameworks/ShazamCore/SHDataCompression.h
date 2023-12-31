//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SHDataStream;

__attribute__((visibility("hidden")))
@interface SHDataCompression : NSObject
{
    int _operation;	// 8 = 0x8
    int _algorithm;	// 12 = 0xc
    id <SHDataStream> _next;	// 16 = 0x10
    CDStruct_4686af4b _stream;	// 24 = 0x18
}

+ (int)supportedCompressionTypeFromFilePathExtension:(id)arg1;	// IMP=0x00100000000047a0
+ (int)supportedCompressionTypeFromFileURL:(id)arg1;	// IMP=0x001000000000474a
- (void).cxx_destruct;	// IMP=0x00000000000048cf
@property(nonatomic) int algorithm; // @synthesize algorithm=_algorithm;
@property(nonatomic) int operation; // @synthesize operation=_operation;
@property(readonly, nonatomic) CDStruct_4686af4b stream; // @synthesize stream=_stream;
@property(retain, nonatomic) id <SHDataStream> next; // @synthesize next=_next;
- (_Bool)performOperation:(int)arg1 withData:(id)arg2 algorithm:(int)arg3 flags:(int)arg4 error:(id *)arg5;	// IMP=0x0000000000004378
- (_Bool)closeWithError:(id *)arg1;	// IMP=0x000000000000426e
- (_Bool)setup;	// IMP=0x0000000000004220
- (_Bool)processData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000041a0
- (id)initWithOperation:(int)arg1 algorithm:(int)arg2;	// IMP=0x0000000000004120
- (id)initForDecompressionWithAlgorithm:(int)arg1;	// IMP=0x0000000000004107
- (id)initForCompressionWithAlgorithm:(int)arg1;	// IMP=0x00000000000040f1
- (void)dealloc;	// IMP=0x00000000000040b7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

