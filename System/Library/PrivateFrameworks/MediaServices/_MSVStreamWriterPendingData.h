//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface _MSVStreamWriterPendingData : NSObject
{
    NSData *_data;	// 8 = 0x8
    CDUnknownBlockType _completionHandler;	// 16 = 0x10
    long long _bytesWritten;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000557e6
@property(nonatomic) long long bytesWritten; // @synthesize bytesWritten=_bytesWritten;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) NSData *data; // @synthesize data=_data;

@end

