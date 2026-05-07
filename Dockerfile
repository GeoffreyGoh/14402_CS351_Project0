# # Use an official GCC image as a parent image
# FROM gcc:13

# # Install make
# RUN apt-get update && apt-get install -y make && rm -rf /var/lib/apt/lists/*

# # Set the working directory
# WORKDIR /app

# # Copy source code and Makefile
# COPY src/ ./src/
# COPY docs/ ./docs/
# COPY Makefile ./

# # Build and run tests
# RUN make run-tests

# # Build main application
# RUN make build

# # Clean up intermediate files
# RUN make clean

# # Default command
# CMD ["/app/bin/twosum_app"]
