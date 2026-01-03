# =====================
# Build Stage
# =====================
FROM gcc:13 AS builder

WORKDIR /build

COPY . .

RUN make

# =====================
# Runtime Stage
# =====================
FROM debian:bookworm-slim

WORKDIR /app

COPY --from=builder /build/bin/conversor .

CMD ["./conversor"]
