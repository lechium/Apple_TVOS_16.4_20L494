//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IXPromisedStreamingZipTransferSeed;

@interface IXSPromisedStreamingZipTransfer
{
}

- (unsigned long long)bytesConsumedOnDisk;	// IMP=0x0010000000024099
- (unsigned long long)totalBytesForProgress;	// IMP=0x0010000000024020
- (void)reset;	// IMP=0x0010000000023f85
- (id)initWithSeed:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000239be
- (oneway void)_remote_setArchiveBytesConsumed:(unsigned long long)arg1;	// IMP=0x0010000000024140

// Remaining properties
@property(readonly, copy, nonatomic) IXPromisedStreamingZipTransferSeed *clientSeed; // @dynamic clientSeed;
@property(retain, nonatomic) IXPromisedStreamingZipTransferSeed *seed; // @dynamic seed;

@end

