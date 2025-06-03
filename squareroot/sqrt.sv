`timescale 1ns/10ps

module sqrt (
    input  real input_value,
    output real result
);

    always_comb begin
        result = squareroot(input_value);
    end

endmodule

// Function to compute the square root using binary search method
function real squareroot(input real val);
    real start_pt, end_pt, mid_pt, tolerance;
    real difference;
    begin
        if (val < 0.0) begin
            $display("Error: Negative input — square root undefined.");
            return 0.0;
        end

        // Define precision
        tolerance = 1e-8;

        // Initialize search bounds
        if (val < 1.0) begin
            start_pt = val;
            end_pt = 1.0;
        end else begin
            start_pt = 0.0;
            end_pt = val;
        end

        // Binary search for square root
        while (1) begin
            mid_pt = (start_pt + end_pt) * 0.5;
            difference = (mid_pt * mid_pt) - val;
            if (abs(difference) <= tolerance)
                break;
            if (difference > 0.0)
                end_pt = mid_pt;
            else
                start_pt = mid_pt;
        end

        return mid_pt;
    end
endfunction

// Function to compute absolute value
function real  abs(input real r);
    begin
        return (r < 0.0) ? -r : r;
    end
endfunction
