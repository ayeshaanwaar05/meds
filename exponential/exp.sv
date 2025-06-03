`timescale 1ns/10ps
module exp(
    input  real input_val,
    output real output_val
);
    always_comb begin
        output_val = compute_exp(input_val);
    end
endmodule

function real compute_exp(input real z);
    
    real sum;
    int term_idx;
    
    begin
        sum = 0.0;
        term_idx = 0;
        while (term_idx < 21) begin
            sum += pow(z, term_idx) / fact(term_idx);
            term_idx++;
        end
        return sum;
    end
endfunction

function real pow(input real base, input int exponent);
    real result1;
    int p;
    begin
        result1 = 1.0;
        p = exponent;
        while (p > 0) begin
            result1 *= base;
            p--;
        end
        return result1;
    end
endfunction

function real fact(input int num);
    real result2;
    int j;
    begin
        if (num == 0 || num == 1)
            return 1.0;
        result2 = 1.0;
        for (j = 2; j <= num; j++)
            result2 *= j;
        return result2;
    end
endfunction
